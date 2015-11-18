/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:20:55 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSString;

@interface NSOperationQueue : NSObject {

	id _private;
	void* _reserved;

}

@property (copy,readonly) NSArray * operations; 
@property (readonly) unsigned operationCount; 
@property (assign) int maxConcurrentOperationCount; 
@property (getter=isSuspended) char suspended; 
@property (copy) NSString * name; 
@property (assign) int qualityOfService; 
@property (assign) NSObject*<OS_dispatch_queue> underlyingQueue; 
+(id)currentQueue;
+(id)mainQueue;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)__;
-(int)qualityOfService;
-(int)maxConcurrentOperationCount;
-(char)overcommitsOperations;
-(void)setOvercommitsOperations:(char)arg1 ;
-(char)isSuspended;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setMaxConcurrentOperationCount:(int)arg1 ;
-(void)setUnderlyingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setQualityOfService:(int)arg1 ;
-(void)addOperationWithBlock:(/*^block*/id)arg1 ;
-(void)cancelAllOperations;
-(void)addOperation:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)underlyingQueue;
-(void)waitUntilAllOperationsAreFinished;
-(NSArray *)operations;
-(unsigned)operationCount;
-(void)setSuspended:(char)arg1 ;
-(void)addOperations:(id)arg1 waitUntilFinished:(char)arg2 ;
@end

