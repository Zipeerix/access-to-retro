/**
 * @file gui/windows/about-dialog.hpp
 */

#ifndef AR_GUI_ABOUTDIALOG_HPP
#define AR_GUI_ABOUTDIALOG_HPP

#include <QDialog>

namespace ar::gui
{
    namespace Ui
    {
        class about_dialog;
    }

    /// @brief Simple window with description of the application
    class about_dialog : public QDialog
    {
    Q_OBJECT

    public:
        explicit about_dialog(QWidget* parent = nullptr);
        ~about_dialog() override;

    private:
        /// @brief Qt's autogenerated Ui
        Ui::about_dialog* ui;
    };
}

#endif // AR_GUI_ABOUTDIALOG_HPP
