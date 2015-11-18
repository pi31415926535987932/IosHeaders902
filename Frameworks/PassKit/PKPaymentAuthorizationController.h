/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:38:08 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class PKInAppPaymentService, NSXPCListener, NSObject, NSXPCConnection, NSTimer, PKPaymentRequest, NSString, PKPaymentAuthorizationControllerExportedObject;

@interface PKPaymentAuthorizationController : NSObject <NSXPCListenerDelegate> {

	char _didPresent;
	PKInAppPaymentService* _inAppPaymentService;
	NSXPCListener* _listener;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _connection;
	NSTimer* _timer;
	PKPaymentRequest* _paymentRequest;
	NSString* _hostIdentifier;
	PKPaymentAuthorizationControllerExportedObject* _exportedObject;
	/*^block*/id _presentationCompletionBlock;
	double _connectionTimeout;

}

@property (assign,nonatomic) id<PKPaymentAuthorizationControllerDelegate> delegate; 
@property (assign,setter=_setPrivateDelegate:,nonatomic) id<PKPaymentAuthorizationControllerPrivateDelegate> _privateDelegate; 
@property (nonatomic,retain) PKInAppPaymentService * inAppPaymentService;                                                                   //@synthesize inAppPaymentService=_inAppPaymentService - In the implementation block
@property (nonatomic,retain) NSXPCListener * listener;                                                                                      //@synthesize listener=_listener - In the implementation block
@property (assign,nonatomic) double connectionTimeout;                                                                                      //@synthesize connectionTimeout=_connectionTimeout - In the implementation block
@property (assign,nonatomic) char didPresent;                                                                                               //@synthesize didPresent=_didPresent - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                                                            //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                                                                  //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                                                                               //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) PKPaymentRequest * paymentRequest;                                                                             //@synthesize paymentRequest=_paymentRequest - In the implementation block
@property (nonatomic,retain) NSString * hostIdentifier;                                                                                     //@synthesize hostIdentifier=_hostIdentifier - In the implementation block
@property (nonatomic,retain) PKPaymentAuthorizationControllerExportedObject * exportedObject;                                               //@synthesize exportedObject=_exportedObject - In the implementation block
@property (nonatomic,copy) id presentationCompletionBlock;                                                                                  //@synthesize presentationCompletionBlock=_presentationCompletionBlock - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)canMakePaymentsUsingNetworks:(id)arg1 capabilities:(unsigned)arg2 ;
+(char)canMakePayments;
+(char)canMakePaymentsUsingNetworks:(id)arg1 ;
-(PKPaymentAuthorizationControllerExportedObject *)exportedObject;
-(id)initWithPaymentRequest:(id)arg1 ;
-(double)connectionTimeout;
-(void)_viewServiceTimerFired:(id)arg1 ;
-(PKInAppPaymentService *)inAppPaymentService;
-(void)_invokeCallbackWithSuccess:(char)arg1 ;
-(id)_remoteObjectProxy;
-(void)setInAppPaymentService:(PKInAppPaymentService *)arg1 ;
-(void)setConnectionTimeout:(double)arg1 ;
-(char)didPresent;
-(void)setDidPresent:(char)arg1 ;
-(PKPaymentRequest *)paymentRequest;
-(void)setPaymentRequest:(PKPaymentRequest *)arg1 ;
-(NSString *)hostIdentifier;
-(void)setHostIdentifier:(NSString *)arg1 ;
-(id)presentationCompletionBlock;
-(void)setPresentationCompletionBlock:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id<PKPaymentAuthorizationControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<PKPaymentAuthorizationControllerDelegate>)delegate;
-(NSXPCConnection *)connection;
-(void)setExportedObject:(PKPaymentAuthorizationControllerExportedObject *)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSXPCListener *)listener;
-(void)setListener:(NSXPCListener *)arg1 ;
-(id<PKPaymentAuthorizationControllerPrivateDelegate>)_privateDelegate;
-(void)_setPrivateDelegate:(id)arg1 ;
-(void)presentWithCompletion:(/*^block*/id)arg1 ;
-(void)dismissWithCompletion:(/*^block*/id)arg1 ;
@end

