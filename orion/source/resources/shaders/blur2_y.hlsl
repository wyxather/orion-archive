static const float OFFSETS[3] = { 0.000000000f, 1.3846153846f, 3.2307692308f };
static const float WEIGHTS[3] = { 0.227027027f, 0.3162162162f, 0.0702702703f };

cbuffer CONST_BUFFER : register(b0)
{
    float4 PARAMS : register(b0);
};

Texture2D TEX : register(t0);

sampler TEX_SAMPLER : register(s0);

struct PS_INPUT
{
    float4 pos : SV_POSITION;
    float4 col : COLOR0;
    float2 uv : TEXCOORD0;
};

float4 main(PS_INPUT input) : SV_TARGET
{
    float4 color = TEX.Sample(TEX_SAMPLER, input.uv);
    color.rgb *= WEIGHTS[0];
    for (uint i = 1; i < 3; ++i)
    {
        color.rgb += TEX.Sample(TEX_SAMPLER, float2(input.uv.x, input.uv.y - PARAMS.x * OFFSETS[i])).rgb * WEIGHTS[i];
        color.rgb += TEX.Sample(TEX_SAMPLER, float2(input.uv.x, input.uv.y + PARAMS.x * OFFSETS[i])).rgb * WEIGHTS[i];
    }
    return color;
}
