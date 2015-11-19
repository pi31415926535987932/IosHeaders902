/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:24 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class NSObject;

@interface _GEOLocationShiftLocation : NSObject {

	SCD_Struct_GE16 _coordinate;
	double _accuracy;
	/*^block*/id _completionHandler;
	/*^block*/id _errorHandler;
	/*^block*/id _mustGoToNetworkCallback;
	CFRunLoopRef _runLoop;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) SCD_Struct_GE16 coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) double accuracy;                         //@synthesize accuracy=_accuracy - In the implementation block
-(SCD_Struct_GE16)coordinate;
-(void)dealloc;
-(double)accuracy;
-(void)_performOnCallbackQueue:(/*^block*/id)arg1 ;
-(id)initWithCoordinate:(SCD_Struct_GE16)arg1 accuracy:(double)arg2 completionHandler:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 mustGoToNetworkCallback:(/*^block*/id)arg5 callbackQueue:(id)arg6 ;
-(void)performErrorHandler:(id)arg1 ;
-(id)initWithCoordinate:(SCD_Struct_GE16)arg1 accuracy:(double)arg2 completionHandler:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 mustGoToNetworkCallback:(/*^block*/id)arg5 callbackRunLoop:(CFRunLoopRef)arg6 ;
-(void)performMustGoToNetwork;
-(id)_initWithCoordinate:(SCD_Struct_GE16)arg1 accuracy:(double)arg2 completionHandler:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 mustGoToNetworkCallback:(/*^block*/id)arg5 ;
-(void)performCompletionHandlerWithShiftedCoordinate:(SCD_Struct_GE16)arg1 accuracy:(double)arg2 ;
@end

