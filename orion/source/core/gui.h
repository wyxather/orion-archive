#pragma once

namespace orion::core
{

struct Platform;

struct Gui final
{
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

        LPDIRECT3DSURFACE9 backBuffer = nullptr;

        LPDIRECT3DPIXELSHADER9 pixelShaderX = nullptr;
        LPDIRECT3DPIXELSHADER9 pixelShaderY = nullptr;

        std::array<float, 4> pixeShaderConstX {};
        std::array<float, 4> pixeShaderConstY {};

        LPDIRECT3DTEXTURE9 texture        = nullptr;
        LPDIRECT3DSURFACE9 textureSurface = nullptr;
        ImVec2             textureSize;

        LPDIRECT3DSURFACE9 originalRenderTarget = nullptr;
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

        IDXGISwapChain&      dXGISwapChain;
        ID3D11Device&        d3D11Device;
        ID3D11DeviceContext& d3D11DeviceContext;

        ID3D11RenderTargetView* renderTarget = nullptr;
        ID3D11Texture2D*        backBuffer   = nullptr;

        ID3D11PixelShader* pixelShaderX = nullptr;
        ID3D11PixelShader* pixelShaderY = nullptr;

        ID3D11Buffer* pixelShaderConstX = nullptr;
        ID3D11Buffer* pixelShaderConstY = nullptr;

        ID3D11Texture2D*          texture     = nullptr;
        ID3D11ShaderResourceView* textureView = nullptr;
        ImVec2                    textureSize;
        CD3D11_BOX                textureBox;
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
        ImVec4 accent     = ImColor( 0, 165, 243 );
        ImVec4 background = ImColor( 8, 8, 8 );
        ImVec4 border     = ImColor( 26, 26, 26, 220 );
        ImVec4 leftBar    = ImColor( 8, 8, 8 );
        ImVec4 logo       = ImColor( 255, 255, 248 );
        ImVec4 logoShadow = ImColor( 65, 186, 217 );
        ImVec4 text       = ImColor( 255, 255, 255 );

    } colors;

    ImVec2 size = {};
    ImVec2 pos  = {};
};

} // namespace orion::core
