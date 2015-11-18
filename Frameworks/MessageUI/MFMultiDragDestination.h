/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:32:47 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MFMultiDragDestination <NSObject>
@required
-(void)dropItems:(id)arg1;
-(id)destinationViewForDrop;
-(void)dragMovedToPoint:(CGPoint)arg1 withItems:(id)arg2;
-(void)dragExitedWithItems:(id)arg1;
-(void)dragEnteredAtPoint:(CGPoint)arg1 withItems:(id)arg2;
-(void)willDropItems:(id)arg1;
-(CGRect*)frameForDroppedItem:(id)arg1;
-(id)supportedDropTypes:(id)arg1;

@end

