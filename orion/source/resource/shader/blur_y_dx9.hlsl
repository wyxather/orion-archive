cbuffer CBUFFER : register(c0) {
    const float SAMPLE_OFFSETS[15];
    const float SAMPLE_WEIGHTS[15];
};

const sampler SAMPLER : register(s0);

float4 main(const float2 uv : TEXCOORD) : SV_TARGET {
    float4 color = 0.0f;
    for ( uint i = 0; i < 15; ++i ) {
        color += tex2D(SAMPLER, float2(uv.x, uv.y + SAMPLE_OFFSETS[i])) * SAMPLE_WEIGHTS[i];
    }
    return color;
}
