/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _UIOLAPropertySource <_UILAPropertySource>
@property (assign,nonatomic) float spacing; 
@property (assign,getter=isBaselineRelativeArrangement,nonatomic) char baselineRelativeArrangement; 
@property (assign,nonatomic) int distribution; 
@property (assign,setter=_setItemOrderingChanged:,nonatomic) char _itemOrderingChanged; 
@property (assign,setter=_setItemFittingSizeChanged:,nonatomic) char _itemFittingSizeChanged; 
@required
-(void)setDistribution:(int)arg1;
-(void)setSpacing:(float)arg1;
-(float)spacing;
-(int)distribution;
-(void)setBaselineRelativeArrangement:(char)arg1;
-(char)isBaselineRelativeArrangement;
-(void)_setItemOrderingChanged:(char)arg1;
-(void)_setItemFittingSizeChanged:(char)arg1;
-(char)_itemOrderingChanged;
-(char)_itemFittingSizeChanged;

@end

