/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, UIFont;

@interface AKFontListController : NSObject {

	NSArray* _fonts;
	UIFont* _defaultFont;

}

@property (retain) NSArray * fonts;                   //@synthesize fonts=_fonts - In the implementation block
@property (retain) UIFont * defaultFont;              //@synthesize defaultFont=_defaultFont - In the implementation block
+(id)attributedStringForFont:(id)arg1 ;
-(id)initWithController:(id)arg1 ;
-(UIFont *)defaultFont;
-(id)_createFontsList;
-(void)setDefaultFont:(UIFont *)arg1 ;
-(void)setFonts:(NSArray *)arg1 ;
-(NSArray *)fonts;
@end

