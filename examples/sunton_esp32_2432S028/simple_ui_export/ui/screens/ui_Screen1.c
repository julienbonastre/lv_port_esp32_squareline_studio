// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: SquareLine_sunton

#include "../ui.h"

void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_redLabel = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_redLabel, lv_pct(100));
    lv_obj_set_height(ui_redLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_redLabel, 0);
    lv_obj_set_y(ui_redLabel, -152);
    lv_obj_set_align(ui_redLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_redLabel, "RED");
    lv_obj_set_style_text_color(ui_redLabel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_redLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_redLabel, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_redLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_greenLabel = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_greenLabel, lv_pct(100));
    lv_obj_set_height(ui_greenLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_greenLabel, 0);
    lv_obj_set_y(ui_greenLabel, -134);
    lv_obj_set_align(ui_greenLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_greenLabel, "GREEN");
    lv_obj_set_style_text_color(ui_greenLabel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_greenLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_greenLabel, lv_color_hex(0x00FF00), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_greenLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_blueLabel = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_blueLabel, lv_pct(100));
    lv_obj_set_height(ui_blueLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_blueLabel, 0);
    lv_obj_set_y(ui_blueLabel, -116);
    lv_obj_set_align(ui_blueLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_blueLabel, "BLUE");
    lv_obj_set_style_text_color(ui_blueLabel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_blueLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_blueLabel, lv_color_hex(0x0000FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_blueLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label1 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label1, "Text of Label1");

}
