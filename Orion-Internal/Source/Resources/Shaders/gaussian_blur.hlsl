Texture2D<float4> Texture : register(t0);
sampler TextureSampler : register(s0);

#define SAMPLE_COUNT 15

cbuffer VS_BLUR_PARAMETERS : register(b0)
{
    float2 SampleOffsets[SAMPLE_COUNT];
    float SampleWeights[SAMPLE_COUNT];
}

struct PS_INPUT
{
    float4 pos : POSITION0;
    float4 col : COLOR0;
    float2 uv  : TEXCOORD0;
};

float4 main(PS_INPUT input) : SV_Target0
{
    float4 c = 0;

    // Combine a number of weighted image filter taps.
    for (int i = 0; i < SAMPLE_COUNT; i++)
    {
        c += Texture.Sample(TextureSampler, input.uv + SampleOffsets[i]) * SampleWeights[i];
    }

    return c;
}