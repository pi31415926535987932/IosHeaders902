/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:32:47 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <MessageUI/MFComposeHeaderView.h>

@class UISegmentedControl;

@interface MFComposeImageSizeView : MFComposeHeaderView {

	UISegmentedControl* _segmentedControl;

}
-(void)setSizeDescription:(id)arg1 forScale:(unsigned)arg2 ;
-(void)segmentedControlChanged;
-(unsigned long)_segmentIndexForScale:(unsigned)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setScale:(unsigned)arg1 ;
@end

