/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:30 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SCROBrailleDisplayDelegate <NSObject>
@required
-(id)newBrailleDisplayCommandDispatcher;
-(void)brailleDisplay:(id)arg1 driverDidLoad:(char)arg2;
-(void)brailleDisplay:(id)arg1 isSleeping:(char)arg2;
-(void)brailleDriverDisconnected:(id)arg1;
-(void)brailleDisplay:(id)arg1 didDisplay:(id)arg2;
-(void)configurationChangedForBrailleDisplay:(id)arg1;
-(void)brailleDisplay:(id)arg1 pressedKeys:(id)arg2;
-(void)brailleDisplay:(id)arg1 didPanLeft:(id)arg2 elementToken:(id)arg3 appToken:(id)arg4;
-(void)brailleDisplay:(id)arg1 didPanRight:(id)arg2 elementToken:(id)arg3 appToken:(id)arg4;
-(id)brailleInputManager;
-(void)playBorderHitSoundForBrailleDisplay:(id)arg1;
-(void)playCommandNotSupportedSoundForBrailleDisplay:(id)arg1;
-(void)brailleDisplay:(id)arg1 memorizedKey:(id)arg2;
-(void)brailleDisplay:(id)arg1 willMemorizeKey:(id)arg2;

@end

