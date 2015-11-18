/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:51:37 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface WKWebsiteDataStore : NSObject <WKObject> {

	ObjectStorage<API::WebsiteDataStore> _websiteDataStore;

}

@property (getter=isPersistent,nonatomic,readonly) char persistent; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
+(id)defaultDataStore;
+(id)nonPersistentDataStore;
+(id)allWebsiteDataTypes;
-(void)dealloc;
-(char)isPersistent;
-(Object*)_apiObject;
-(void)fetchDataRecordsOfTypes:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeDataOfTypes:(id)arg1 modifiedSince:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeDataOfTypes:(id)arg1 forDataRecords:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

