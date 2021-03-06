/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CPCopying.h>

@class CPZoneBorder;

@interface CPZoneBorderIntersection : NSObject <NSCopying, CPCopying> {

	CGRect intersectionRect;
	CPZoneBorder* intersectingBorder;
	char forwardVector;
	char backwardVector;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initSuper;
-(void)setIntersectionRect:(CGRect)arg1 ;
-(void)setIntersectingBorder:(id)arg1 ;
-(int)comparePositionLengthwise:(id)arg1 ;
-(id)intersectingBorder;
-(CGRect)intersectionRect;
-(char)backwardVector;
-(void)setForwardVector:(char)arg1 ;
-(void)setBackwardVector:(char)arg1 ;
-(char)forwardVector;
@end

