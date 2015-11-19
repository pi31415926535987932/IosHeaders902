/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface EDPivotFieldItem : NSObject {

	BOOL mChildItems;
	BOOL mExpanded;
	BOOL mCalculatedMember;
	BOOL mMissed;
	BOOL mHidden;
	BOOL mDetailsHidden;
	int mType;
	unsigned long mItemIndex;

}
+(id)pivotFieldItem;
-(void)setHidden:(BOOL)arg1 ;
-(id)init;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)expanded;
-(BOOL)hidden;
-(BOOL)childItems;
-(void)setChildItems:(BOOL)arg1 ;
-(BOOL)calculatedMember;
-(void)setCalculatedMember:(BOOL)arg1 ;
-(BOOL)missed;
-(void)setMissed:(BOOL)arg1 ;
-(BOOL)detailsHidden;
-(void)setDetailsHidden:(BOOL)arg1 ;
-(unsigned long)itemIndex;
-(void)setItemIndex:(unsigned long)arg1 ;
@end

