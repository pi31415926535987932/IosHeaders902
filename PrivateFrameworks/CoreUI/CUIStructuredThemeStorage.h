/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CUIStructuredThemeStorage <NSObject>
@optional
-(unsigned)colorSpaceID;

@required
-(id)renditionWithKey:(const renditionkeytoken*)arg1;
-(char)canGetRenditionWithKey:(const renditionkeytoken*)arg1;
-(id)renditionWithKey:(const renditionkeytoken*)arg1 usingKeySignature:(id)arg2;
-(char)getFontName:(id*)arg1 baselineOffset:(float*)arg2 forFontType:(id)arg3;
-(float)fontSizeForFontSizeType:(id)arg1;
-(char)getPhysicalColor:(colordef*)arg1 withName:(id)arg2;
-(char)hasPhysicalColorWithName:(id)arg1;
-(unsigned)documentFormatVersion;
-(unsigned)distilledInCoreUIVersion;
-(unsigned)authoredWithSchemaVersion;
-(id)catalogGlobals;

@end

