Texture2D<float4>   base_texture    : register(t0);
Texture2D<float4>   bloom_texture   : register(t1);
sampler             texture_sampler : register(s0);

cbuffer VS_BLOOM_PARAMETERS			: register(b0)
{
	float bloom_threshold;
	float blur_amount;
	float bloom_intensity;
	float base_intensity;
	float bloom_saturation;
	float base_saturation;
}

struct PS_INPUT
{
	float4 pos : POSITION0;
	float4 col : COLOR0;
	float2 uv  : TEXCOORD0;
};

// Helper for modifying the saturation of a color.
float4 adjust_saturation(float4 color, float saturation)
{
	// The constants 0.3, 0.59, and 0.11 are chosen because the
	// human eye is more sensitive to green light, and less to blue.
	float grey = dot(color.rgb, float3(0.3f, 0.59f, 0.11f));
	return lerp(grey, color, saturation);
}

float4 main(PS_INPUT input) : SV_Target0
{
	float4 base = base_texture.Sample(texture_sampler, input.uv);
	float4 bloom = bloom_texture.Sample(texture_sampler, input.uv);
	// Adjust color saturation and intensity.
	bloom = adjust_saturation(bloom, bloom_saturation) * bloom_intensity;
	base = adjust_saturation(base, base_saturation) * base_intensity;
	// Darken down the base image in areas where there is a lot of bloom,
	// to prevent things looking excessively burned-out.
	base *= (1.0f - saturate(bloom));
	// Combine the two images.
	return base + bloom;
}