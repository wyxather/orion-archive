#pragma once

namespace orion {

    class Redirect final {
    private:
        Redirect() = delete;

    public:
        Redirect(Redirect &&) = delete;
        Redirect &operator=(Redirect &&) = delete;

        Redirect(const Redirect &) = delete;
        Redirect &operator=(const Redirect &) = delete;
    };

}  // namespace orion
