/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:40 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MFPath : NSObject <NSCopying>
-(int)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)currentPoint;
-(int)end;
-(int)begin;
-(int)stroke:(id)arg1 ;
-(int)flatten;
-(int)closeFigure;
-(int)abort;
-(int)widen:(id)arg1 ;
-(int)fill:(id)arg1 ;
-(char)isOpen;
@end
