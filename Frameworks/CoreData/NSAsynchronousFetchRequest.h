/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:45:48 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSPersistentStoreRequest.h>

@class NSFetchRequest;

@interface NSAsynchronousFetchRequest : NSPersistentStoreRequest {

	NSFetchRequest* _fetchRequest;
	id _requestCompletionBlock;
	int _estimatedResultCount;

}

@property (readonly) NSFetchRequest * fetchRequest;                 //@synthesize fetchRequest=_fetchRequest - In the implementation block
@property (readonly) id completionBlock;                            //@synthesize requestCompletionBlock=_requestCompletionBlock - In the implementation block
@property (assign,nonatomic) int estimatedResultCount;              //@synthesize estimatedResultCount=_estimatedResultCount - In the implementation block
-(id)initWithFetchRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(int)estimatedResultCount;
-(void)setEstimatedResultCount:(int)arg1 ;
-(unsigned)requestType;
-(void)dealloc;
-(id)description;
-(id)completionBlock;
-(NSFetchRequest *)fetchRequest;
@end

