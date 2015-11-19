/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:29 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@protocol OS_dispatch_group;
@class NSObject, NSError;

@interface BRXPCSyncProxy : NSProxy {

	NSObject* _target;
	NSObject*<OS_dispatch_group> _group;
	NSError* _error;
	id _result;
	int _nested;

}

@property (nonatomic,retain) NSError * error;              //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) id result;                    //@synthesize result=_result - In the implementation block
-(NSError *)error;
-(void)dealloc;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)result;
-(void)setObjResult:(id)arg1 error:(id)arg2 ;
-(id)resultWithTimeout:(int)arg1 ;
-(id)initWithXPCObject:(id)arg1 ;
-(void)setBoolResult:(char)arg1 error:(id)arg2 ;
-(void)finalize;
-(void)setError:(NSError *)arg1 ;
-(void)setResult:(id)arg1 ;
@end

