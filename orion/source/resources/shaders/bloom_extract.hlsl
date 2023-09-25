Texture2D<float4>   texture_2d		: register(t0);
sampler             texture_sampler : register(s0);

cbuffer VS_BLOOM_PARAMETERS : register(b0)
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

float4 main(PS_INPUT input) : SV_Target0
{
	float4 c = texture_2d.Sample(texture_sampler, input.uv);
	return saturate((c - bloom_threshold) / (1.0f - bloom_threshold));
}