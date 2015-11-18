/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:36:08 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NEFilterAbsoluteVerdict, NSURL, NSObject;

@interface NEFilterFlow : NSObject <NSSecureCoding, NSCopying> {

	char _isOpen;
	NEFilterAbsoluteVerdict* _currentVerdict;
	char _isRemediationFlow;
	NSURL* _URL;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) NSURL * URL;                                         //@synthesize URL=_URL - In the implementation block
@property (retain) NEFilterAbsoluteVerdict * currentVerdict; 
@property (assign) char isOpen; 
@property (assign) char isRemediationFlow;                                //@synthesize isRemediationFlow=_isRemediationFlow - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
+(char)supportsSecureCoding;
-(NEFilterAbsoluteVerdict *)currentVerdict;
-(char)isRemediationFlow;
-(void)setCurrentVerdict:(NEFilterAbsoluteVerdict *)arg1 ;
-(void)setIsOpen:(char)arg1 ;
-(void)setIsRemediationFlow:(char)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
-(void)close;
-(char)isOpen;
@end
