//
//  FlickrPhotoListTVC.h
//  SPoT
//
//  Created by Michael Grysikiewicz on 2/24/13.
//  Copyright (c) 2013 Michael Grysikiewicz. All rights reserved.
//
//  This is an abstract base class for all of the Photo List
//  Table View Contoller (TVC) classes in the SPoT App.
//  All of the abstract methods provide a template
//  of the task which the derived method should perform.
//
//  It inherits standard TVC functionality from FlickrListTVC
//

#import "FlickrListTVC.h"

@interface FlickrPhotoListTVC : FlickrListTVC

// Model for this MVC, can be set externally
@property (strong, nonatomic) NSArray *flickrListPhotos; // of NSDictionary

// Abstract methods - implemented by derived classes

// Save the photo description, not the image
- (void)savePhoto:(NSDictionary *)flickrPhoto;

- (void)alphabetizePhotoList;

// Property value MUST be set in the derived class
@property (strong, nonatomic) NSString *segueIdentifierString;

@end
