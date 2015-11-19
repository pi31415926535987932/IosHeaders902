/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADPathElement.h>

@interface OADVectorArcPathElement : OADPathElement {

	OADAdjustCoord mLeft;
	OADAdjustCoord mTop;
	OADAdjustCoord mRight;
	OADAdjustCoord mBottom;
	OADAdjustPoint mStartVector;
	OADAdjustPoint mEndVector;
	char mClockwise;
	char mConnectedToPrevious;

}
-(OADAdjustCoord)left;
-(OADAdjustCoord)top;
-(OADAdjustCoord)right;
-(OADAdjustCoord)bottom;
-(id)initWithLeft:(OADAdjustCoord)arg1 top:(OADAdjustCoord)arg2 right:(OADAdjustCoord)arg3 bottom:(OADAdjustCoord)arg4 startVector:(OADAdjustPoint)arg5 endVector:(OADAdjustPoint)arg6 clockwise:(char)arg7 connectedToPrevious:(char)arg8 ;
-(char)connectedToPrevious;
-(OADAdjustPoint)startVector;
-(OADAdjustPoint)endVector;
-(char)clockwise;
@end

