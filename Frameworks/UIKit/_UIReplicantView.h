/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:16 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class _UISlotIdWrapper, UIScreen, _UIReplicantContentView;

@interface _UIReplicantView : UIView {

	_UISlotIdWrapper* _slotIdWrapper;
	UIScreen* _screen;
	CGSize _snapshotSize;
	_UIReplicantContentView* _contentView;

}
+(Class)layerClass;
+(id)snapshotWithView:(id)arg1 fromRect:(CGRect)arg2 capInsets:(UIEdgeInsets)arg3 defer:(char)arg4 ;
+(id)_pendingSnapshotOfTarget:(id)arg1 snapshotBlock:(/*^block*/id)arg2 ;
+(id)snapshotContext;
+(id)snapshotWindows:(id)arg1 withRect:(CGRect)arg2 ;
+(id)snapshotWithScreen:(id)arg1 defer:(char)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(id)_copyResizableSnapshotViewFromRect:(CGRect)arg1 withCapInsets:(UIEdgeInsets)arg2 ;
-(CGAffineTransform)_appliedTransform;
@end

