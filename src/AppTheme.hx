import feathers.motion.transitions.ColorFadeTransitionBuilder;
import feathers.controls.navigators.TabItem;
import openfl.Lib;
import openfl.display.BitmapData;
import openfl.display.Bitmap;
import openfl.text.TextFormat; // font, size, color, bold(True/False), italic(t/f), underline(t/f), url, target(window), align, leftMargin, rightMargin, indent, leading
import openfl.utils.Assets;
import openfl.display.Sprite;

import feathers.core.ScreenDensityScaleManager;  // опроеделяет, как масштабируется приложение и как задаются его размеры

import feathers.controls.Application;  // 
import feathers.controls.Label;    // класс рисующий надпись
import feathers.controls.ButtonState;  // состояние кнопок
import feathers.controls.Button;  // кнопка
import feathers.style.IDarkModeTheme;  // интерфейс, который поддерживает тёмную тему
import feathers.style.IStyleObject;
import feathers.style.IStyleProvider;
import feathers.style.ITheme;
import feathers.style.ClassVariantStyleProvider;
import feathers.style.Theme;
import feathers.controls.navigators.TabNavigator;
import feathers.controls.Panel;

class ViewApp implements ITheme{
      var button_image:BitmapData;
      var object:Bitmap;
  
      var _icon:Bitmap;
  
      public function new(){
          cast(Theme.fallbackTheme, IDarkModeTheme).darkMode = true;     
  
          this.styleProvider = new ClassVariantStyleProvider();
          this.styleProvider.setStyleFunction(Application, null, setApplicationStyles);
          this.styleProvider.setStyleFunction(TabNavigator, null, setNavigatorStyles);
          this.styleProvider.setStyleFunction(Button, null, setButtonStyles);
      } 
  
      private var fontName = "_sans";
      private var fontSize = 50;
      private var textColor = 0xf1f1f1;
      private var backgroundColor = 0x383838;
      private var activeColor = 0x636373;
      private var buttonColor = 0xD1CFF2;
      private var button_border = 0x636373;
      private var operationColor = 0xff9500;
      private var toolTipBackgroundColor = 0x000000;
      private var padding = 6.0;
  
      private var styleProvider:ClassVariantStyleProvider;
  
      public function getStyleProvider(target:IStyleObject):IStyleProvider{
          return styleProvider;
      }
      public function dispose():Void{}
  
  
    private function setApplicationStyles(app:Application):Void{
        if (app.backgroundSkin == null){
           // var skin = new RectangleSkin();
           // skin.fill = SolidColor(this.buttonColor);
            //app.backgroundSkin = skin;
        }
        //app.stage.color = this.backgroundColor;
        if(app.scaleManager == null){
            app.scaleManager = new ScreenDensityScaleManager();
        }
    }

    private function setNavigatorStyles(tabNav:TabNavigator):Void{
        var transition = new ColorFadeTransitionBuilder()
            .setColor(0x000000)
            .setDuration(1.5)
            //.setEase(Expo.easeOut)
            .build();
    }
      
    var img_container:Sprite;
    var picture:Bitmap;
    

/**      BUTTONS STYLES     **/

    private function setButtonStyles(button:Button):Void{
        if (button.backgroundSkin == null){

            img_container = new Sprite();
            picture = new Bitmap(Assets.getBitmapData("colosseum.jpg"));
            img_container.addChild(picture);
            button.text = Std.string(Lib.application.window.width);
            img_container.width = Lib.application.window.width * 0.25 - 20;
            img_container.height = Lib.application.window.height * 0.25 - 20;

            //var skin = new RectangleSkin();
            //skin.fill = SolidColor(this.buttonColor);
            button.setIconForState(ButtonState.UP, img_container);
            //button.setFillForState(ButtonState.HOVER, SolidColor(0x000000));
            //button.backgroundSkin = skin;            
        }
    }

}
