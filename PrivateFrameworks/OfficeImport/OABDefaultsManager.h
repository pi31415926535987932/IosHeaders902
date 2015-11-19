/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/OABPropertiesManager.h>

@class NSString;

@interface OABDefaultsManager : NSObject <OABPropertiesManager>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isFilled;
-(char)isStroked;
-(EshColor)shadowColor;
-(int)shadowAlpha;
-(char)hidden;
-(long)strokeWidth;
-(EshColor)fillFgColor;
-(EshColor)strokeFgColor;
-(EshColor)fillBgColor;
-(EshColor)strokeBgColor;
-(int)fillType;
-(int)fillFgAlpha;
-(int)fillAngle;
-(int)fillFocusLeft;
-(int)fillFocusTop;
-(int)fillFocusRight;
-(int)fillFocusBottom;
-(unsigned)fillBlipID;
-(id)fillBlipName;
-(int)fillBgAlpha;
-(EshBlip*)fillBlipDataReference;
-(long)fillFocus;
-(const EshTablePropVal<EshGradientStop>Ref)fillGradientColors;
-(int)strokeFillType;
-(unsigned)strokeFillBlipID;
-(id)strokeFillBlipName;
-(int)strokeFgAlpha;
-(int)strokeMiterLimit;
-(int)strokeCompoundType;
-(int)strokePresetDash;
-(const EshTablePropVal<int>Ref)strokeCustomDash;
-(int)strokeCapStyle;
-(int)strokeJoinStyle;
-(int)strokeStartArrowType;
-(int)strokeStartArrowWidth;
-(int)strokeStartArrowLength;
-(int)strokeEndArrowType;
-(int)strokeEndArrowWidth;
-(int)strokeEndArrowLength;
-(char)isShadowed;
-(int)shadowType;
-(long)shadowOffsetX;
-(long)shadowOffsetY;
-(long)shadowSoftness;
-(char)isFillOK;
-(char)isStrokeOK;
-(char)isShadowOK;
-(char)isTextPath;
-(id)textPathUnicodeString;
-(int)textPathTextAlignment;
-(int)textPathFontSize;
-(id)textPathFontFamily;
-(char)textPathBold;
-(char)textPathItalic;
-(char)textPathUnderline;
-(char)textPathSmallcaps;
-(char)textPathStrikethrough;
@end

