package
{
   import flash.desktop.NativeApplication;
   import flash.display.Sprite;
   import flash.events.InvokeEvent;

   public class cmdline extends Sprite
   {
      public function cmdline()
      {
         NativeApplication.nativeApplication.addEventListener(
            InvokeEvent.INVOKE, onInvokeEvent); 

         function onInvokeEvent(invocation:InvokeEvent):void { 
            trace(invocation.arguments); 
         } 
      }
   }
}
