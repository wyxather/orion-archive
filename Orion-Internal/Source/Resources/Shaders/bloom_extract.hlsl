Texture2D<float4> Texture : register(t0);
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

float4 main(PS_INPUT input) : SV_Target0
{
    float4 c = Texture.Sample(TextureSampler, input.uv);
    return saturate((c - BloomThreshold) / (1 - BloomThreshold));
}