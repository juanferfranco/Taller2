{
// Only draw if the explorer has found the sword
if ( !obj_person.has_sword ) exit;
// First determine the size of the lit area
var x1,y1,x2,y2,ww;
if ( global.swordon ) ww = 800 else ww = 300;
x1 = argument0-ww/2;
x2 = argument0+ww/2;
y1 = argument1-ww/2;
y2 = argument1+ww/2;
// Hide things that are far away by drawing black rectangles
draw_set_color(c_black);
draw_rectangle(0,0,x1,room_height,false);
draw_rectangle(x2,0,room_width,room_height,false);
draw_rectangle(0,0,room_width,y1,false);
draw_rectangle(0,y2,room_width,room_height,false);
// Now hide nearby stuff by subtracting the light image

draw_set_blend_mode(bm_subtract);
draw_background_stretched(bg_backlight,x1,y1,ww,ww);
draw_set_blend_mode(bm_normal);

}
