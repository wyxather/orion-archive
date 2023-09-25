#define SAMPLE_COUNT 15

Texture2D<float4>   texture_2d		: register(t0);
sampler             texture_sampler : register(s0);

cbuffer VS_BLUR_PARAMETERS			: register(b0)
{
	float2	sample_offsets[SAMPLE_COUNT];
	float	sample_weights[SAMPLE_COUNT];
}

struct PS_INPUT
{
	float4 pos : POSITION0;
	float4 col : COLOR0;
	float2 uv  : TEXCOORD0;
};

float4 main(PS_INPUT input) : SV_Target0
{
	float4 c = 0.0f;
	// Combine a number of weighted image filter taps.
	for (int i = 0; i < SAMPLE_COUNT; i++)
		c += texture_2d.Sample(texture_sampler, input.uv + sample_offsets[i]) * sample_weights[i];
	return c;
}