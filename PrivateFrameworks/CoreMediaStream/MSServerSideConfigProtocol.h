/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:46 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MSServerSideConfigProtocolDelegate;
#import <CoreMediaStream/CoreMediaStream-Structs.h>
@class NSString, NSURL;

@interface MSServerSideConfigProtocol : NSObject {

	id<MSServerSideConfigProtocolDelegate> _delegate;
	NSString* _personID;
	NSURL* _configURL;
	MSSSCPCContext* _context;

}

@property (assign,nonatomic) id<MSServerSideConfigProtocolDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * personID;                                        //@synthesize personID=_personID - In the implementation block
-(void)setDelegate:(id<MSServerSideConfigProtocolDelegate>)arg1 ;
-(void)dealloc;
-(id<MSServerSideConfigProtocolDelegate>)delegate;
-(id)initWithPersonID:(id)arg1 baseURL:(id)arg2 ;
-(void)_didFailAuthenticationWithError:(id)arg1 ;
-(void)queryConfiguration;
-(void)_didFinishWithResponse:(id)arg1 error:(id)arg2 ;
-(NSString *)personID;
-(void)abort;
@end

