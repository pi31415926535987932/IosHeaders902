/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface ODIBending : NSObject {

	float mSpaceWidth;
	float mSpaceHeight;
	char mWithArrows;
	float mRectHeight;
	unsigned mMaxNodeCount;
	unsigned mMaxColumnCount;

}
+(unsigned)mapLogicalBoundsWithShapeSize:(CGSize)arg1 spaceSize:(CGSize)arg2 maxNodeCount:(unsigned)arg3 maxColumnCount:(unsigned)arg4 state:(id)arg5 ;
+(char)mapIdentifier:(id)arg1 state:(id)arg2 ;
-(void)mapWithState:(id)arg1 ;
-(id)initWithArrows:(char)arg1 ;
-(void)setRectHeight:(float)arg1 ;
-(void)setMaxNodeCount:(unsigned)arg1 ;
-(void)setMaxColumnCount:(unsigned)arg1 ;
@end

