/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreBookkeeper/SBKRequestData.h>

@interface SBKSyncRequestData : SBKRequestData
-(id)syncTransaction;
-(id)_serializableUpdateItemPayloadDictionaryForKey:(id)arg1 ;
-(id)_serializableDeleteItemPayloadDictionaryForKey:(id)arg1 ;
-(id)_serializableConflictDetectionValue;
-(char)_needsConflictDetection;
-(id)_serializableConflictDetectionOrdinalForKey:(id)arg1 ;
-(id)serializableRequestBodyPropertyList;
@end

