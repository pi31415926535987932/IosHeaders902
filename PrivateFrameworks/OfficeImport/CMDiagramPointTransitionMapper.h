/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:36 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/CMDiagramPointMapper.h>

@class NSDictionary;

@interface CMDiagramPointTransitionMapper : CMDiagramPointMapper {

	int mShapeType;
	NSDictionary* mAdjustValues;

}
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithPoint:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 shapeType:(int)arg4 adjustValues:(id)arg5 parent:(id)arg6 ;
-(id)initWithPoint:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 shapeType:(int)arg4 parent:(id)arg5 ;
@end

