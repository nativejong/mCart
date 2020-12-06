//
//  rateVC.swift
//  Example
//
//  Created by John Blaine on 12/1/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

import UIKit
import mCart


class rateVC: UIViewController {
    var rate : mCart?

    override func viewDidLoad() {
        super.viewDidLoad()
        self.edgesForExtendedLayout = []
        
        rate = mCart(frame: CGRect.zero)
        self.view.addSubview(rate!)
        self.view.backgroundColor = UIColor.red
    }
    
    
    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
        
        self.rate?.oview.tbl.addItemEx("")
        self.rate?.oview.tbl.addItemEx("")
        self.rate?.oview.tbl.refresh()
        
        self.rate?.oview.kprice.putTotal(100.0, tax: 11.0)
        
        self.rate?.oview.tbl.stamp.isHidden = false
        
        self.rate?.oview.kadr .putData("Jon",
                                       street: "street",
                                       city: "city",
                                       phone: "12345678")
    }
    
    
    override func viewWillLayoutSubviews() {
        let w = self.view.frame.size.width;
        let h = self.view.frame.size.height;
        rate?.frame = CGRect(x: w * 0.0, y: h * 0.0, width: w * 1.0, height: h * 1.0)
    }

}
