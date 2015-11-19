/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:32 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/ICPropertyListSerializable.h>

@class ICSearchIndexableIdentifiers, ICSearchIndexTransactionInfo;

@interface ICSearchIndexingBatch : NSObject <ICPropertyListSerializable> {

	ICSearchIndexableIdentifiers* _searchIndexableIdentifiers;
	ICSearchIndexTransactionInfo* _transactionInfo;

}

@property (nonatomic,copy) ICSearchIndexableIdentifiers * searchIndexableIdentifiers;              //@synthesize searchIndexableIdentifiers=_searchIndexableIdentifiers - In the implementation block
@property (nonatomic,copy) ICSearchIndexTransactionInfo * transactionInfo;                         //@synthesize transactionInfo=_transactionInfo - In the implementation block
-(id)initWithPropertyListObjectRepresentation:(id)arg1 version:(long long)arg2 ;
-(id)propertyListObjectRepresentation;
-(ICSearchIndexableIdentifiers *)searchIndexableIdentifiers;
-(void)setSearchIndexableIdentifiers:(ICSearchIndexableIdentifiers *)arg1 ;
-(void)setTransactionInfo:(ICSearchIndexTransactionInfo *)arg1 ;
-(ICSearchIndexTransactionInfo *)transactionInfo;
-(id)initWithSearchIndexableIdentifiers:(id)arg1 transactionInfo:(id)arg2 ;
-(char)isCompletedByTransactionInfo:(id)arg1 ;
@end

