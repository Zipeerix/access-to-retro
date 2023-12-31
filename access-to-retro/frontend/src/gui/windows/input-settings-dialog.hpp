/**
 * @file gui/windows/input-settings-dialog.hpp
 */

#ifndef AR_GUI_INPUTSETTINGSDIALOG_HPP
#define AR_GUI_INPUTSETTINGSDIALOG_HPP

#include <QDialog>
#include "util/settings-manager.hpp"

namespace ar::gui
{
    namespace Ui
    {
        class input_settings_dialog;
    }

    /// @brief Settings window specifically for settings about player input
    class input_settings_dialog : public QDialog
    {
    Q_OBJECT

    public:
        explicit input_settings_dialog(QWidget* parent = nullptr);
        ~input_settings_dialog() override;

    private:
        /// @brief Global settings manager to set the keys names
        std::shared_ptr<ar::util::settings_manager> _settings_manager;

        /// @brief Qt's autogenerated Ui
        Ui::input_settings_dialog* ui;

        /// @brief Connect all buttons to a lambda opening input_ask_for_key_dialog
        void connect_buttons();

        /// @brief Get button names for each input from settings
        void refresh_button_names();
    };
}

#endif // AR_GUI_INPUTSETTINGSDIALOG_HPP
