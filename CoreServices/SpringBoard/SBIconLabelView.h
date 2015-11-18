/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UILegibilityView.h>

@class SBIconLabelImageParameters;

@interface SBIconLabelView : _UILegibilityView {

	SBIconLabelImageParameters* _imageParameters;

}

@property (nonatomic,retain) SBIconLabelImageParameters * imageParameters;              //@synthesize imageParameters=_imageParameters - In the implementation block
+(void)updateIconLabelView:(id)arg1 withSettings:(id)arg2 imageParameters:(id)arg3 ;
+(id)newIconLabelViewWithSettings:(id)arg1 imageParameters:(id)arg2 ;
-(SBIconLabelImageParameters *)imageParameters;
-(void)_checkInImages;
-(void)setImageParameters:(SBIconLabelImageParameters *)arg1 ;
-(void)dealloc;
@end
