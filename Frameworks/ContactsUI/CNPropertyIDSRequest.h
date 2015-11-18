/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:44:03 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSIDQueryControllerDelegate.h>

@class NSArray, NSString;

@interface CNPropertyIDSRequest : NSObject <IDSIDQueryControllerDelegate> {

	NSArray* _propertyItems;
	NSString* _listenerID;
	NSString* _service;
	/*^block*/id _requestResultBlock;
	/*^block*/id _idQueryResultHandler;

}

@property (nonatomic,retain) NSArray * propertyItems;               //@synthesize propertyItems=_propertyItems - In the implementation block
@property (nonatomic,retain) NSString * listenerID;                 //@synthesize listenerID=_listenerID - In the implementation block
@property (nonatomic,retain) NSString * service;                    //@synthesize service=_service - In the implementation block
@property (copy) id requestResultBlock;                             //@synthesize requestResultBlock=_requestResultBlock - In the implementation block
@property (nonatomic,copy) id idQueryResultHandler;                 //@synthesize idQueryResultHandler=_idQueryResultHandler - In the implementation block
@property (nonatomic,readonly) char cancelled; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedWorkQueue;
-(id)initWithPropertyItems:(id)arg1 service:(id)arg2 postToMainQueue:(char)arg3 resultBlock:(/*^block*/id)arg4 ;
-(NSArray *)propertyItems;
-(void)setPropertyItems:(NSArray *)arg1 ;
-(void)setListenerID:(NSString *)arg1 ;
-(void)setRequestResultBlock:(id)arg1 ;
-(NSString *)listenerID;
-(void)_requestStatusOnMainQueue:(char)arg1 ;
-(void)cleanupDelegate;
-(void)setIdQueryResultHandler:(id)arg1 ;
-(id)requestResultBlock;
-(id)idQueryResultHandler;
-(void)idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2 ;
-(void)cancel;
-(char)cancelled;
-(NSString *)service;
-(void)setService:(NSString *)arg1 ;
@end

