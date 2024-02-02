#pragma once

namespace orion::core
{

struct Platform;

struct Gui final
{
    class BlurParams final
    {
        struct alignas( 16 ) Float final
        {
            void operator=( float other ) noexcept;
            void operator/=( float other ) noexcept;

            float value = 0.0f;
        };

        std::array<Float, 15> sampleOffsets = {};
        std::array<Float, 15> sampleWeights = {};

      public:
        constexpr BlurParams() noexcept                               = default;
        constexpr BlurParams( BlurParams&& ) noexcept                 = default;
        constexpr BlurParams& operator=( BlurParams&& ) noexcept      = default;
        constexpr BlurParams( const BlurParams& ) noexcept            = default;
        constexpr BlurParams& operator=( const BlurParams& ) noexcept = default;

        BlurParams( float texelSize, float blurAmount ) noexcept;
    };

    struct PostProcess final
    {
        PostProcess( PostProcess&& )                 = delete;
        PostProcess& operator=( PostProcess&& )      = delete;
        PostProcess( const PostProcess& )            = delete;
        PostProcess& operator=( const PostProcess& ) = delete;

        explicit PostProcess( IDirect3DDevice9& direct3DDevice9 ) noexcept;

        void createDeviceObjects() noexcept;
        void invalidateDeviceObjects() noexcept;

        void draw( ImDrawList& drawList ) noexcept;

      private:
        static void begin( const ImDrawList*, const ImDrawCmd* cmd ) noexcept;
        static void firstPass( const ImDrawList*, const ImDrawCmd* cmd ) noexcept;
        static void secondPass( const ImDrawList*, const ImDrawCmd* cmd ) noexcept;
        static void end( const ImDrawList*, const ImDrawCmd* cmd ) noexcept;

        IDirect3DDevice9& direct3DDevice9;

        LPDIRECT3DSURFACE9 backBuffer           = nullptr;
        LPDIRECT3DSURFACE9 originalRenderTarget = nullptr;

        std::array<LPDIRECT3DPIXELSHADER9, 2> pixelShader      = {};
        std::array<BlurParams, 2>             pixelShaderConst = {};

        LPDIRECT3DTEXTURE9 texture        = nullptr;
        LPDIRECT3DSURFACE9 textureSurface = nullptr;
        ImVec2             textureSize;
    };

    struct PostProcess2 final
    {
        PostProcess2( PostProcess2&& )                 = delete;
        PostProcess2& operator=( PostProcess2&& )      = delete;
        PostProcess2( const PostProcess2& )            = delete;
        PostProcess2& operator=( const PostProcess2& ) = delete;

        explicit PostProcess2( IDXGISwapChain&      dXGISwapChain,
                               ID3D11Device&        d3D11Device,
                               ID3D11DeviceContext& d3D11DeviceContext ) noexcept;

        void createDeviceObjects() noexcept;
        void invalidateDeviceObjects() noexcept;

        void setRenderTarget() const noexcept;
        void draw( ImDrawList& drawList ) noexcept;

      private:
        static void begin( const ImDrawList*, const ImDrawCmd* cmd ) noexcept;
        static void firstPass( const ImDrawList*, const ImDrawCmd* cmd ) noexcept;
        static void secondPass( const ImDrawList*, const ImDrawCmd* cmd ) noexcept;
        static void end( const ImDrawList*, const ImDrawCmd* cmd ) noexcept;

        IDXGISwapChain&      dXGISwapChain;
        ID3D11Device&        d3D11Device;
        ID3D11DeviceContext& d3D11DeviceContext;

        ID3D11Texture2D*        backBuffer    = nullptr;
        ID3D11RenderTargetView* backBufferRTV = nullptr;

        std::array<ID3D11PixelShader*, 2> pixelShader      = {};
        std::array<ID3D11Buffer*, 2>      pixelShaderConst = {};

        std::array<ID3D11Texture2D*, 2>          texture    = {};
        std::array<ID3D11RenderTargetView*, 2>   textureRTV = {};
        std::array<ID3D11ShaderResourceView*, 2> textureSRV = {};
        ImVec2                                   textureSize;
        CD3D11_BOX                               textureBox;
    };

    friend void to_json( nlohmann::json& json, const Gui& gui ) noexcept;

    Gui( Gui&& )                 = delete;
    Gui& operator=( Gui&& )      = delete;
    Gui( const Gui& )            = delete;
    Gui& operator=( const Gui& ) = delete;

    explicit Gui( const Platform&, ImGuiContext& ) noexcept;

    constexpr void draw( std::invocable auto postProcessInvoker ) noexcept
    {
        constexpr auto windowFlags =
            ( ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoScrollWithMouse |
              ImGuiWindowFlags_NoNav | ImGuiWindowFlags_NoSavedSettings );

        if ( !isOpen() )
        {
            return;
        }

        ImGui::SetNextWindowSize( ImVec2( 820.0f, 585.0f ) );

        if ( ImGui::Begin( ImStrv( xorstr( "Orion" ) ), nullptr, windowFlags ) ) [[likely]]
        {
            std::invoke( postProcessInvoker );
            draw( windowFlags );
        }
        ImGui::End();

        editor();
    }

    void               toggleOpen() noexcept;
    [[nodiscard]] bool isOpen() const noexcept;

    [[nodiscard]] utilities::Option<PostProcess, false>&  getPostProcess() noexcept;
    [[nodiscard]] utilities::Option<PostProcess2, false>& getPostProcess2() noexcept;

  private:
    void draw( ImGuiWindowFlags windowFlags ) const noexcept;
    void editor() noexcept;

    static constexpr std::array<ImWchar, 3> FONT_AWESOME_GLYPH_RANGE = { 0xe000, 0xf8ff, 0x0 };

    bool                                   open = true;
    utilities::Option<PostProcess, false>  postProcess;
    utilities::Option<PostProcess2, false> postProcess2;

    struct
    {
        ImVec4 accent            = {};
        ImVec4 backgroundContent = {};
        ImVec4 backgroundUtility = {};
        ImVec4 border            = {};
        ImVec4 leftBar           = {};
        ImVec4 logo              = {};
        ImVec4 logoShadow        = {};
        ImVec4 text              = {};
    } colors;

    ImVec2 size = {};
    ImVec2 pos  = {};
};

} // namespace orion::core
