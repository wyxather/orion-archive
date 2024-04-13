cbuffer CBUFFER : register(b0) {
    const float SAMPLE_OFFSETS[15];
    const float SAMPLE_WEIGHTS[15];
};

const sampler SAMPLER : register(s0);

const Texture2D TEXTURE2D : register(t0);

struct INPUT {
    float4 pos : SV_POSITION;
    float4 col : COLOR0;
    float2 uv : TEXCOORD0;
};

float4 main(const INPUT input) : SV_TARGET {
    float4 color = 0.0f;
    for ( uint i = 0; i < 15; ++i ) {
        color += TEXTURE2D.Sample(SAMPLER, float2(input.uv.x + SAMPLE_OFFSETS[i], input.uv.y)) * SAMPLE_WEIGHTS[i];
    }
    return color;
}
