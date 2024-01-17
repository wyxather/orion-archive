static const float OFFSETS[3] = { 0.000000000f, 1.3846153846f, 3.2307692308f };
static const float WEIGHTS[3] = { 0.227027027f, 0.3162162162f, 0.0702702703f };

cbuffer CONST_BUFFER : register(c0)
{
    float4 PARAMS : register(c0);
};

sampler TEX_SAMPLER : register(s0);

float4 main(float2 uv : TEXCOORD) : SV_TARGET
{
    float4 color = tex2D(TEX_SAMPLER, uv);
    color.rgb *= WEIGHTS[0];
    for (uint i = 1; i < 3; ++i)
    {
        color.rgb += tex2D(TEX_SAMPLER, float2(uv.x, uv.y - PARAMS.x * OFFSETS[i])).rgb * WEIGHTS[i];
        color.rgb += tex2D(TEX_SAMPLER, float2(uv.x, uv.y + PARAMS.x * OFFSETS[i])).rgb * WEIGHTS[i];
    }
    return color;
}
