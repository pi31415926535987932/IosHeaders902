/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:20 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraUI/CAMExpandableMenuButton.h>

@class UIImageView, NSArray;

@interface CAMHDRButton : CAMExpandableMenuButton {

	char _allowsAutomaticHDR;
	char _allowsHDROn;
	UIImageView* __glyphView;
	NSArray* __allowedModes;

}

@property (assign,nonatomic) int HDRMode; 
@property (assign,nonatomic) char allowsAutomaticHDR;                                     //@synthesize allowsAutomaticHDR=_allowsAutomaticHDR - In the implementation block
@property (assign,nonatomic) char allowsHDROn;                                            //@synthesize allowsHDROn=_allowsHDROn - In the implementation block
@property (nonatomic,readonly) UIImageView * _glyphView;                                  //@synthesize _glyphView=__glyphView - In the implementation block
@property (setter=_setAllowedModes:,nonatomic,copy) NSArray * _allowedModes;              //@synthesize _allowedModes=__allowedModes - In the implementation block
-(void)reloadData;
-(id)headerView;
-(void)setHDRMode:(int)arg1 ;
-(int)HDRMode;
-(id)initWithExpansionOrientation:(int)arg1 ;
-(void)setAllowsAutomaticHDR:(char)arg1 ;
-(void)setAllowsHDROn:(char)arg1 ;
-(UIImageView *)_glyphView;
-(id)hiddenIndexesWhileCollapsed;
-(int)modeForIndex:(int)arg1 ;
-(unsigned)indexForMode:(int)arg1 ;
-(void)_updateCurrentGlyphImage;
-(id)_currentGlyphImage;
-(void)prepareHeaderViewForExpanding:(char)arg1 ;
-(void)_updateAllowedModes;
-(void)_commonCAMHDRButtonInitialization;
-(void)_updateFromAllowedModesChangeWithCurrentMode:(int)arg1 ;
-(char)allowsAutomaticHDR;
-(char)allowsHDROn;
-(void)_setAllowedModes:(id)arg1 ;
-(NSArray *)_allowedModes;
-(char)shouldAllowExpansion;
-(int)numberOfMenuItems;
-(id)titleForMenuItemAtIndex:(int)arg1 ;
@end
