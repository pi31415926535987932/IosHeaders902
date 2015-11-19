/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:14 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <CameraKit/CMKBadgeTextView.h>

@class NSString;

@interface CMKExposureBiasTextView : CMKBadgeTextView {

	float _exposureBias;
	NSString* __lastText;

}

@property (assign,nonatomic) float exposureBias;                //@synthesize exposureBias=_exposureBias - In the implementation block
@property (nonatomic,retain) NSString * _lastText;              //@synthesize _lastText=__lastText - In the implementation block
-(id)_text;
-(CGSize)_textSize;
-(id)_textAttributes;
-(id)_textForExposureBias:(float)arg1 ;
-(void)setExposureBias:(float)arg1 ;
-(float)_textHorizontalInset;
-(float)_textHorizontalKerningOffset;
-(float)_textVerticalInset;
-(float)exposureBias;
-(NSString *)_lastText;
-(void)set_lastText:(NSString *)arg1 ;
@end

