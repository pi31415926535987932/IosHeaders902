/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
@class NSString, NSMutableArray;

@interface PAMountStatus : NSObject {

	NSString* _path;
	NSString* _type;
	NSMutableArray* _snapshots;

}
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
-(void)dealloc;
-(id)copySanitizedName;
-(id)copyName;
-(id)initWithName:(id)arg1 andType:(id)arg2 ;
-(void)addStatus:(netfs_status*)arg1 atMachTime:(double)arg2 ;
-(char)isBlockingThread:(unsigned long long)arg1 betweenMachStartTime:(double)arg2 andEndTime:(double)arg3 ;
-(char)isUnresponsiveBetweenMachStartTime:(double)arg1 andEndTime:(double)arg2 ;
-(id)copyUnresponsiveDescriptionForThread:(unsigned long long)arg1 withSanitizedPaths:(char)arg2 betweenMachStartTime:(double)arg3 andEndTime:(double)arg4 includeThreadIDs:(char)arg5 ;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(unsigned long)sizeInBytesForSerializedVersion;
-(char)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
@end
