/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATMessageLink.h>
@class NSString;


@protocol ATMessageLink <NSObject>
@property (getter=isInitialized,nonatomic,readonly) char initialized; 
@property (getter=isOpen,nonatomic,readonly) char open; 
@property (nonatomic,readonly) int endpointType; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@required
-(int)endpointType;
-(void)addObserver:(id)arg1;
-(NSString *)identifier;
-(void)removeObserver:(id)arg1;
-(void)sendResponse:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)removeRequestHandlerForDataClass:(id)arg1;
-(void)sendRequest:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)addRequestHandler:(id)arg1 forDataClass:(id)arg2;
-(char)isInitialized;
-(char)isOpen;

@end


@class NSString;

@interface ATMessageLink : NSObject <ATMessageLink>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isInitialized,nonatomic,readonly) char initialized; 
@property (getter=isOpen,nonatomic,readonly) char open; 
@property (nonatomic,readonly) int endpointType; 
@property (nonatomic,copy,readonly) NSString * identifier; 
-(int)endpointType;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(NSString *)identifier;
-(void)removeObserver:(id)arg1 ;
-(void)sendResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removeRequestHandlerForDataClass:(id)arg1 ;
-(void)sendRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)addRequestHandler:(id)arg1 forDataClass:(id)arg2 ;
-(char)isInitialized;
-(char)isOpen;
@end

