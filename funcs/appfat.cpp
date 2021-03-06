#include "types.h"

// address: 0x40102A
//
// appfat_get_error_string returns a formatted error message based on the given
// error code.
char * __fastcall appfat_get_error_string(uint32_t error_code);

// address: 0x4010CE
//
// appfat_get_DD_error_string stores a formatted error message in error_buf
// based on the given DirectDraw error code.
void __fastcall appfat_get_DD_error_string(uint32_t error_code, char *error_buf, int error_buf_len);

// address: 0x401831
//
// appfat_get_DS_error_string stores a formatted error message in error_buf
// based on the given DirectSound error code.
void __fastcall appfat_get_DS_error_string(uint32_t error_code, char *error_buf, int error_buf_len);

// address: 0x40193A
//
// appfat_get_last_error returns a formatted error message of the last error.
char * appfat_get_last_error();

// address: 0x401947
//
// appfat_terminate_message_box terminates the game and displays an error
// message box.
void __attribute__((noreturn)) appfat_terminate_message_box(char *format, ...);

// address: 0x401975
//
// appfat_message_box displays an error message box based on the given format
// string and variable argument list.
void __fastcall appfat_message_box(char *format, va_list va);

// address: 0x4019C7
//
// appfat_cleanup cleans up after a fatal application error.
void appfat_cleanup();

// address: 0x401A30
//
// appfat_draw_message_box renders an in-game message box with the given text
// on screen.
void appfat_draw_message_box(char *format, ...);

// address: 0x401A65
//
// appfat_DD_assert terminates the game with a DirectDraw assertion message box.
void __fastcall appfat_DD_assert(uint32_t error_code, int log_line_nr, char *log_file_path);

// address: 0x401A88
//
// appfat_DS_assert terminates the game with a DirectSound assertion message
// box.
void __fastcall appfat_DS_assert(uint32_t error_code, int log_line_nr, char *log_file_path);

// address: 0x401AAB
//
// appfat_centre_dialog_box centres the given dialog box.
void __fastcall appfat_centre_dialog_box(HWND hDlg);

// address: 0x401B3D
//
// appfat_terminate_dialog_box terminates the game and displays an error dialog
// box based on the given template id.
void __fastcall __attribute__((noreturn)) appfat_terminate_dialog_box(int template_id, uint32_t error_code, char *log_file_path, int log_line_nr);

// address: 0x401BCA
//
// appfat_dialog_func is a callback function which processes messages sent to
// the given dialog box.
bool32_t __stdcall appfat_dialog_func(HWND hDlg, UINT uMsg, WPARAM wParam, char *text);

// address: 0x401C0F
//
// appfat_set_dialog_text sets the text of the given dialog.
void __fastcall appfat_set_dialog_text(HWND hDlg, char *text);

// address: 0x401C2E
//
// appfat_dialog_box displays an error dialog box based on the given template id
// and error code.
void __fastcall appfat_dialog_box(template_id template_id, uint32_t error_code, char *log_file_path, int log_line_nr);

// address: 0x401C9C
//
// appfat_terminate_file_error_dialog terminates the game with a file not found
// error dialog.
void __fastcall __attribute__((noreturn)) appfat_terminate_file_error_dialog(char *error);

// address: 0x401CE1
//
// appfat_terminate_disk_space_error_dialog terminates the game with an out of
// disk space error dialog.
void __fastcall __attribute__((noreturn)) appfat_terminate_disk_space_error_dialog(char *error);

// address: 0x401D1D
//
// appfat_terminate_insert_cd_error_dialog terminates the game with an insert CD
// error dialog.
bool32_t appfat_terminate_insert_cd_error_dialog();

// address: 0x401D68
//
// appfat_terminate_directory_error_dialog terminates the game with a read-only
// directory error dialog.
void __fastcall __attribute__((noreturn)) appfat_terminate_directory_error_dialog(char *error);
