/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSManagedObjectID;

@interface PLLoadRequestKey : NSObject <NSCopying> {

	unsigned short _sourceID;
	NSManagedObjectID* _objectID;
	unsigned _hash;

}
+(id)keyWithSource:(id)arg1 asset:(id)arg2 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

