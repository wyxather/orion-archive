#pragma once

namespace orion::core
{

struct Platform;

struct Gui final
{
    struct Blur final
    {
        Blur( Blur&& )                 = delete;
        Blur& operator=( Blur&& )      = delete;
        Blur( const Blur& )            = delete;
        Blur& operator=( const Blur& ) = delete;

        explicit Blur( IDirect3DDevice9& direct3DDevice9 ) noexcept;

        void createDeviceObjects() noexcept;
        void invalidateDeviceObjects() noexcept;

        void draw( ImDrawList& drawList ) noexcept;

      private:
        static void beginBlur( const ImDrawList*, const ImDrawCmd* cmd ) noexcept;
        static void firstPass( const ImDrawList*, const ImDrawCmd* cmd ) noexcept;
        static void secondPass( const ImDrawList*, const ImDrawCmd* cmd ) noexcept;
        static void endBlur( const ImDrawList*, const ImDrawCmd* cmd ) noexcept;

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

    struct Blur2 final
    {
        Blur2( Blur2&& )                 = delete;
        Blur2& operator=( Blur2&& )      = delete;
        Blur2( const Blur2& )            = delete;
        Blur2& operator=( const Blur2& ) = delete;

        explicit Blur2( IDXGISwapChain&      dXGISwapChain,
                        ID3D11Device&        d3D11Device,
                        ID3D11DeviceContext& d3D11DeviceContext ) noexcept;

        void createDeviceObjects() noexcept;
        void invalidateDeviceObjects() noexcept;

        void draw( ImDrawList& drawList ) noexcept;

      private:
        static void beginBlur( const ImDrawList*, const ImDrawCmd* cmd ) noexcept;
        static void firstPass( const ImDrawList*, const ImDrawCmd* cmd ) noexcept;
        static void secondPass( const ImDrawList*, const ImDrawCmd* cmd ) noexcept;

        IDXGISwapChain&      dXGISwapChain;
        ID3D11Device&        d3D11Device;
        ID3D11DeviceContext& d3D11DeviceContext;

        ID3D11Texture2D* backBuffer = nullptr;

        ID3D11PixelShader* pixelShaderX = nullptr;
        ID3D11PixelShader* pixelShaderY = nullptr;

        ID3D11Buffer* pixelShaderConstX = nullptr;
        ID3D11Buffer* pixelShaderConstY = nullptr;

        ID3D11Texture2D*          texture     = nullptr;
        ID3D11ShaderResourceView* textureView = nullptr;
        ImVec2                    textureSize;
    };

    friend void to_json( nlohmann::json& json, const Gui& gui ) noexcept;

    Gui( Gui&& )                 = delete;
    Gui& operator=( Gui&& )      = delete;
    Gui( const Gui& )            = delete;
    Gui& operator=( const Gui& ) = delete;

    explicit Gui( const Platform&, ImGuiContext& ) noexcept;

    constexpr void draw( std::invocable auto postProcess ) const noexcept
    {
        const auto&  style = ImGui::GetStyle();
        const ImVec2 windowSize( 802.0f, 658.0f );

        ImGui::SetNextWindowSize( windowSize );
        ImGui::PushStyleVar( ImGuiStyleVar_WindowPadding, ImVec2() );
        if ( ImGui::Begin( ImStrv( xorstr( "Window" ) ),
                           nullptr,
                           ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoDecoration |
                               ImGuiWindowFlags_NoScrollWithMouse | ImGuiWindowFlags_NoNav |
                               ImGuiWindowFlags_NoSavedSettings ) ) [[likely]]
        {
            std::invoke( postProcess );

            const ImVec2 watermarkSize( 192.0f, 61.0f );
            const ImVec2 tabsSize( watermarkSize.x, windowSize.y - watermarkSize.y - 2.0f );

            ImGui::BeginGroup();
            if ( ImGui::BeginChild(
                     ImStrv( xorstr( "Tabs" ) ), tabsSize, ImGuiChildFlags_None, ImGuiWindowFlags_NoBackground ) )
                [[likely]]
            {
                ImGui::GetWindowDrawList()->AddRectFilled( ImGui::GetCursorScreenPos(),
                                                           ImGui::GetCursorScreenPos() + tabsSize,
                                                           ImGui::GetColorU32( ImGuiCol_ChildBg, 0.85f ),
                                                           style.WindowRounding,
                                                           ImDrawFlags_RoundCornersTopLeft );
            }
            ImGui::EndChild();

            ImGui::SetCursorScreenPos( ImGui::GetCursorScreenPos() - ImVec2( 0.0f, style.ItemSpacing.y ) );
            ImGui::GetWindowDrawList()->AddRectFilled( ImGui::GetCursorScreenPos(),
                                                       ImGui::GetCursorScreenPos() + ImVec2( tabsSize.x, 2.0f ),
                                                       ImGui::GetColorU32( ImGuiCol_Border ) );
            ImGui::SetCursorScreenPos( ImGui::GetCursorScreenPos() + ImVec2( 0.0f, 2.0f ) );

            if ( ImGui::BeginChild( ImStrv( xorstr( "Watermark" ) ),
                                    watermarkSize,
                                    ImGuiChildFlags_None,
                                    ImGuiWindowFlags_NoBackground ) ) [[likely]]
            {
                ImGui::GetWindowDrawList()->AddRectFilled( ImGui::GetCursorScreenPos(),
                                                           ImGui::GetCursorScreenPos() + watermarkSize,
                                                           ImGui::GetColorU32( ImGuiCol_ChildBg, 0.85f ),
                                                           style.WindowRounding,
                                                           ImDrawFlags_RoundCornersBottomLeft );
            }
            ImGui::EndChild();
            ImGui::EndGroup();

            ImGui::SameLine( 0.0f, 2.0f );
            ImGui::GetWindowDrawList()->AddRectFilled( ImGui::GetCursorScreenPos(),
                                                       ImGui::GetCursorScreenPos() + ImVec2( -2.0f, windowSize.y ),
                                                       ImGui::GetColorU32( ImGuiCol_Border ) );

            ImGui::BeginGroup();
            if ( ImGui::BeginChild( ImStrv( xorstr( "Subtabs" ) ),
                                    ImVec2( 0.0f, 71.0f ),
                                    ImGuiChildFlags_None,
                                    ImGuiWindowFlags_NoBackground ) ) [[likely]]
            {
                ImGui::GetWindowDrawList()->AddRectFilled( ImGui::GetCursorScreenPos(),
                                                           ImGui::GetCursorScreenPos() + ImGui::GetContentRegionAvail(),
                                                           ImGui::GetColorU32( ImGuiCol_ChildBg ),
                                                           style.WindowRounding,
                                                           ImDrawFlags_RoundCornersTopRight );
            }
            ImGui::EndChild();

            ImGui::SetCursorScreenPos( ImGui::GetCursorScreenPos() - ImVec2( 0.0f, style.ItemSpacing.y ) );
            ImGui::GetWindowDrawList()->AddRectFilled( ImGui::GetCursorScreenPos(),
                                                       ImGui::GetCursorScreenPos() +
                                                           ImVec2( ImGui::GetContentRegionAvail().x, 2.0f ),
                                                       ImGui::GetColorU32( ImGuiCol_Border ) );
            ImGui::SetCursorScreenPos( ImGui::GetCursorScreenPos() + ImVec2( 0.0f, 2.0f ) );

            if ( ImGui::BeginChild(
                     ImStrv( xorstr( "Content" ) ), ImVec2(), ImGuiChildFlags_None, ImGuiWindowFlags_NoBackground ) )
                [[likely]]
            {
                ImGui::GetWindowDrawList()->AddRectFilled( ImGui::GetCursorScreenPos(),
                                                           ImGui::GetCursorScreenPos() + ImGui::GetContentRegionAvail(),
                                                           ImGui::GetColorU32( ImGuiCol_ChildBg ),
                                                           style.WindowRounding,
                                                           ImDrawFlags_RoundCornersBottomRight );
            }
            ImGui::EndChild();
            ImGui::EndGroup();
        }
        ImGui::End();
        ImGui::PopStyleVar();
    }

    void toggleOpen() noexcept;

    _NODISCARD constexpr auto& getBlur() noexcept
    {
        return blur;
    }

    _NODISCARD constexpr auto& getBlur2() noexcept
    {
        return blur2;
    }

  private:
    bool                            open = true;
    utilities::Option<Blur, false>  blur;
    utilities::Option<Blur2, false> blur2;
};

} // namespace orion::core
