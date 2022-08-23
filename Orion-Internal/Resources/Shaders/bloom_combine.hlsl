Texture2D<float4> BaseTexture : register(t0);
Texture2D<float4> BloomTexture : register(t1);
sampler TextureSampler : register(s0);

cbuffer VS_BLOOM_PARAMETERS : register(b0)
{
    float BloomThreshold;
    float BlurAmount;
    float BloomIntensity;
    float BaseIntensity;
    float BloomSaturation;
    float BaseSaturation;
}

struct PS_INPUT
{
    float4 pos : POSITION0;
    float4 col : COLOR0;
    float2 uv  : TEXCOORD0;
};

// Helper for modifying the saturation of a color.
float4 AdjustSaturation(float4 color, float saturation)
{
    // The constants 0.3, 0.59, and 0.11 are chosen because the
    // human eye is more sensitive to green light, and less to blue.
    float grey = dot(color.rgb, float3(0.3, 0.59, 0.11));

    return lerp(grey, color, saturation);
}

float4 main(PS_INPUT input) : SV_Target0
{
    float4 base = BaseTexture.Sample(TextureSampler, input.uv);
    float4 bloom = BloomTexture.Sample(TextureSampler, input.uv);

    // Adjust color saturation and intensity.
    bloom = AdjustSaturation(bloom, BloomSaturation) * BloomIntensity;
    base = AdjustSaturation(base, BaseSaturation) * BaseIntensity;

    // Darken down the base image in areas where there is a lot of bloom,
    // to prevent things looking excessively burned-out.
    base *= (1 - saturate(bloom));

    // Combine the two images.
    return base + bloom;
}