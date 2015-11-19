/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:07 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <TSUtility/TSUtility-Structs.h>
@class NSMutableArray, NSString, NSDictionary;

@interface TSMTraceController : NSObject {

	NSMutableArray* mBuffers;
	NSString* mTraceDirectory;
	long mLastBufferID;
	NSDictionary* mBuildInfo;
	int mModuleCache[256];
	unsigned long mFilterCache[256];

}

@property (nonatomic,readonly) NSString * traceDirectory; 
+(void)flushAllBuffers;
+(id)traceDirectory;
+(long)addBufferWithTag:(id)arg1 size:(long)arg2 synchronized:(char)arg3 ;
+(void)addBuffer:(id)arg1 ;
+(id)bufferByID:(long)arg1 ;
+(void)stopTracing;
+(void)startTracing;
+(long)addBufferWithTag:(id)arg1 size:(long)arg2 ;
+(void)closeBufferWithID:(long)arg1 ;
+(void)shutdown;
+(char)setup;
-(void)p_buffer:(id)arg1 changedModule:(int)arg2 toFilter:(unsigned long)arg3 from:(unsigned long)arg4 ;
-(void)writeTraceRecord:(TSMTraceRecord_s*)arg1 withFilter:(unsigned long)arg2 ;
-(void)flushAllBuffers;
-(NSString *)traceDirectory;
-(long)addBuffer:(id)arg1 ;
-(id)bufferByID:(long)arg1 ;
-(void)closeBuffer:(id)arg1 ;
-(void)stopTracing;
-(void)startTracing;
-(id)p_createTraceDirectory;
-(long)p_newBufferID;
-(void)p_writeBuildInfoToFile:(id)arg1 ;
-(id)buffers;
-(void)dealloc;
-(id)init;
@end

