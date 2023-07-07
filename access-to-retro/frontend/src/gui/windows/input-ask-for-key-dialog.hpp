/**
 * @file gui/windows/input-ask-for-key.hpp
 */

#ifndef AR_GUI_INPUTASKFORKEYDIALOG_HPP
#define AR_GUI_INPUTASKFORKEYDIALOG_HPP

#include <QDialog>
#include "util/settings-manager.hpp"

namespace ar::gui
{
    namespace Ui
    {
        class input_ask_for_key_dialog;
    }

    /// @brief Shown by input setting window to ask for a key to set for specific controller button
    class input_ask_for_key_dialog : public QDialog
    {
    Q_OBJECT

    public:
        /**
         * @brief Default constructor
         * @param parent Input setting window
         * @param key_user_friendly_name Name of the key that's being set in user friendly format
         * @param key_setting_name Name of key that's being set as it is in the settings file
         */
        explicit input_ask_for_key_dialog(QWidget* parent, std::string key_setting_name);
        ~input_ask_for_key_dialog() override;

    private:
        /// @brief Global settings manager to change input settings
        std::shared_ptr<ar::util::settings_manager> _settings_manager;

        /// @brief Name of key that's being set as it is in the settings file
        std::string _key_setting_name;

        /// @brief Qt's autogenerated Ui
        Ui::input_ask_for_key_dialog* ui;

        /// @brief Overrides Qt's Key press event for input handling
        void keyPressEvent(QKeyEvent* event) override;
    };
}

#endif // AR_GUI_INPUTASKFORKEYDIALOG_HPP